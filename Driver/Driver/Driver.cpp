#include <ntddk.h>


void SampleUnload(PDRIVER_OBJECT);

extern "C"
NTSTATUS DriverEntry(PDRIVER_OBJECT DriverObject, PUNICODE_STRING RegistryPath) {
	UNREFERENCED_PARAMETER(DriverObject);
	UNREFERENCED_PARAMETER(RegistryPath);
	// Driver's Unload routine that is automatically called before driver is unloaded from memory
	DriverObject->DriverUnload = SampleUnload;

	return STATUS_SUCCESS;
}


void SampleUnload(PDRIVER_OBJECT DriverObject) {
	UNREFERENCED_PARAMETER(DriverObject);
}