@interface CNErrorFactory : NSObject

+ (id)errorByPrependingKeyPath:(id)a0 toKeyPathsInError:(id)a1;
+ (id)genericiOSABError;
+ (id)errorByAddingUserInfoEntries:(id)a0 toError:(id)a1;
+ (id)errorObject:(id)a0 doesNotImplementSelector:(SEL)a1;
+ (id)errorForiOSABError:(struct __CFError { } *)a0;
+ (id)_localizedDescriptionForCode:(long long)a0;
+ (id)_localizedReasonForCode:(long long)a0;
+ (long long)CNErrorCodeForABError:(struct __CFError { } *)a0;
+ (id)errorWithCode:(long long)a0 userInfo:(id)a1;
+ (id)os_log;
+ (id)validationErrorByAggregatingValidationErrors:(id)a0;
+ (id)errorWithCode:(long long)a0;

@end
