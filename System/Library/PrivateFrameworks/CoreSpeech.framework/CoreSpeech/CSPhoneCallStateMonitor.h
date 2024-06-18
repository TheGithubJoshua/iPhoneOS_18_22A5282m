@interface CSPhoneCallStateMonitor : CSEventMonitor

+ (id)sharedInstance;

- (unsigned long long)phoneCallState;
- (BOOL)firstPartyCall;

@end
