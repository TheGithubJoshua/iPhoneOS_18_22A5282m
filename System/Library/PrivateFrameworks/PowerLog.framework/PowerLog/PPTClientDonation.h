@interface PPTClientDonation : NSObject

+ (void)sendEventWithIdentifier:(const struct PerfPowerTelemetryIdentifier { char x0[512]; char x1[512]; } *)a0 payload:(struct __CFDictionary { } *)a1;
+ (struct PerfPowerTelemetryIdentifier { char x0[512]; char x1[512]; } *)createIdentifierForSubsystem:(const char *)a0 category:(const char *)a1;
+ (BOOL)isRegisteredSubsystem:(const char *)a0 category:(const char *)a1;

@end
