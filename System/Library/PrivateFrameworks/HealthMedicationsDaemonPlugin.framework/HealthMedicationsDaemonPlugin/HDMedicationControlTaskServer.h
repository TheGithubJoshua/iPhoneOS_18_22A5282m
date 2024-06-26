@interface HDMedicationControlTaskServer : HDStandardTaskServer <HKMedicationControlServerInterface>

+ (id)taskIdentifier;

- (void)connectionInvalidated;
- (id)remoteInterface;
- (id)exportedInterface;
- (void)remote_deleteDismissedDrugInteractionsForMedication:(id)a0 completion:(id /* block */)a1;
- (void)remote_allDismissedDrugInteractionsWithCompletion:(id /* block */)a0;
- (void)remote_markInteractionAsDismissed:(id)a0 completion:(id /* block */)a1;

@end
