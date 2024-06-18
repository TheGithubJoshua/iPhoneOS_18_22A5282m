@interface REMComplicationDataViewFetchModelInvocationResult : REMStoreInvocationResult {
    void /* unknown type, empty encoding */ accountStorages;
    void /* unknown type, empty encoding */ listStorages;
    void /* unknown type, empty encoding */ reminderStorages;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end