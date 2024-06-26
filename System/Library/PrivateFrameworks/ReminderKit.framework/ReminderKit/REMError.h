@interface REMError : NSObject

+ (id)cancelledError;
+ (id)validationErrorNotCloudKitAccount:(id)a0;
+ (id)tooManyLoadedStoresError;
+ (id)_errorWithCode:(long long)a0 underlyingError:(id)a1;
+ (id)errorSanitizedForXPCFromError:(id)a0;
+ (id)unauthorizedErrorWithMissingEntitlement:(id)a0;
+ (id)validationErrorRemoveAccountBeingInserted:(id)a0;
+ (id)notSupportedError;
+ (id)mismatchedObjectIDWithObjectID:(id)a0 expected:(Class)a1;
+ (BOOL)isNoSuchObjectError:(id)a0 forObjectID:(id)a1;
+ (id)saveErrorWithCoreDataError:(id)a0;
+ (id)errorFromErrors:(id)a0;
+ (id)throttledErrorWithRemainingTimeInterval:(double)a0;
+ (id)internalErrorWithDebugDescription:(id)a0;
+ (id)noSuchObjectErrorWithObjectID:(id)a0;
+ (id)internetNotReachableError;
+ (BOOL)catchObjCException:(id /* block */)a0 error:(id *)a1;
+ (id)unexpectedError;
+ (id)babySatErrorWithOperationName:(id)a0;
+ (id)retryLaterErrorWithInterval:(double)a0;
+ (id)validationErrorNestedSubtask:(id)a0 parentReminderID:(id)a1;
+ (id)constraintConflictWithIdentifier:(id)a0 constraint:(id)a1;
+ (id)validationErrorMoveFromAccount:(id)a0 toAccount:(id)a1 objectID:(id)a2;
+ (id)validationErrorRemoveAccountBeingActivated:(id)a0;
+ (id)noSuchSmartListErrorWithSmartListType:(id)a0;
+ (id)validationErrorUndeleteHashtagFromAnotherReminder:(id)a0 expectedReminderID:(id)a1;
+ (id)validationErrorMoveAcrossAccount:(id)a0;
+ (id)unexpectedNilPropertyWithObjectID:(id)a0 property:(id)a1;
+ (id)validationErrorMoveReminderFromList:(id)a0 toList:(id)a1 inAccount:(id)a2;
+ (id)accountStoreMissingError:(id)a0;
+ (id)noSuchObjectErrorWithDACalendarItemUniqueIdentifier:(id)a0;
+ (id)xpcPerformerUnavailableErrorWithDescription:(id)a0;
+ (id)unauthorizedErrorWithMissingEntitlement:(id)a0 requestedAccessLevel:(id)a1 currentAccesslevel:(id)a2;
+ (id)validationErrorSubtaskAndParentNotOnSameList:(id)a0 parentReminderID:(id)a1;
+ (id)noSuchObjectErrorWithExternalIdentifier:(id)a0;
+ (id)validationErrorListHasNoAccount:(id)a0;
+ (id)invalidParameterErrorWithDescription:(id)a0;
+ (BOOL)_isCoreDataError:(id)a0;
+ (id)validationErrorDifferentZoneObjectID:(id)a0 zoneOwnerName:(id)a1 parentObjectID:(id)a2 parentZoneOwnerName:(id)a3;
+ (id)nullifiedRelationshipErrorWithRelationshipName:(id)a0;
+ (id)noPrimaryActiveCloudKitAccountError;
+ (id)_errorSanitizedForXPCFromError:(id)a0;
+ (id)unexpectedNilPropertyWithClass:(Class)a0 property:(id)a1;

@end
