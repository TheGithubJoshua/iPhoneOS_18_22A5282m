@interface BLHelper : NSObject

+ (id)buildVersion;
+ (id)numberFromDouble:(double)a0;
+ (id)encryptData:(id)a0;
+ (id)deviceBatteryLevel;
+ (id)bootArgs;
+ (id)stringFromSequenceType:(unsigned int)a0;
+ (id)numberFromFloat:(float)a0;
+ (void)writeTailspinToFile:(id)a0;
+ (id)stringFromFrameType:(unsigned int)a0;
+ (void)displayUserPrompt:(unsigned long long)a0 strings:(id)a1 completion:(id /* block */)a2;
+ (id)deviceSerialNumber;
+ (id)objectOrNSNull:(id)a0;
+ (id)numberForBootArg:(id)a0;

@end
