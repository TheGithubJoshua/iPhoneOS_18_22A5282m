@interface AMSUnitTests : NSObject

@property (class, readonly, nonatomic, getter=isRunningUnitTests) BOOL runningUnitTests;

+ (id)encryptionKeyForDataProtectionClass:(unsigned long long)a0;
+ (void)setEncryptionKey:(id)a0 forDataProtectionClass:(unsigned long long)a1;
+ (id)_encryptionKeys;
+ (void)_sync:(id /* block */)a0;

@end
