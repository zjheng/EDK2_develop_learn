#include "LearningDriver.h"

VOID
EFIAPI
SetupNotify (
  IN EFI_EVENT  Event,
  IN VOID       *Context
)
{
    EFI_STATUS Status;
    UINTN length;
    BOOLEAN SetupEntered;
    UINTN DataSize = sizeof(BOOLEAN);
    EFI_GUID gSetupEnteredGuid = { 0x706a87f1, 0x9d6d, 0x4927, { 0x9d, 0xa, 0xf3, 0x2f, 0xbb, 0xf2, 0xa9, 0xac } };

    Status = gRT->GetVariable(
        L"SetupEntered",
        &gSetupEnteredGuid,
        NULL,
        &DataSize,
        &SetupEntered
    );
    if (EFI_ERROR(Status) || !SetupEntered) {
        DEBUG ((DEBUG_ERROR, "zjdbg SetupNotify: GetVariable Status: %r, SetupEntered: %d\n", Status, SetupEntered));
        return;
    }
    DEBUG ((DEBUG_ERROR, "zjdbg SetupNotify: GetVariable Status: %r, SetupEntered: %d\n", Status, SetupEntered));

    length = PrintStringAt (0,0,L"zjdbg Hello World!");
    DEBUG ((DEBUG_ERROR, "zjdbg %a() Line:%d length:%d\n",__func__,__LINE__,length));
}

EFI_STATUS
EFIAPI
LearningDriverEntryPoint(
  IN EFI_HANDLE           ImageHandle,
  IN EFI_SYSTEM_TABLE     *SystemTable
  )
{
    EFI_EVENT TimerEvent;
    EFI_STATUS Status = EFI_SUCCESS;

    DEBUG ((DEBUG_ERROR, "zjdbg %a() Line:%d\n", __func__, __LINE__));

    Status = gBS->CreateEvent(
        EVT_TIMER | EVT_NOTIFY_SIGNAL,
        TPL_CALLBACK,
        SetupNotify,
        NULL,
        &TimerEvent
    );
    DEBUG ((DEBUG_ERROR, "zjdbg CreateEvent Status: %r\n", Status));
    if (EFI_ERROR(Status)) {
        DEBUG ((DEBUG_ERROR, "zjdbg CreateEvent failed, Status: %r\n", Status));
        return Status;
    }

    Status = gBS->SetTimer(TimerEvent, TimerPeriodic, 30000000);
    DEBUG ((DEBUG_ERROR, "zjdbg SetTimer Status: %r\n", Status));
    if (EFI_ERROR(Status)) {
        DEBUG ((DEBUG_ERROR, "zjdbg SetTimer failed, Status: %r\n", Status));
        gBS->CloseEvent(TimerEvent);
        return Status;
    }

    return Status;
}