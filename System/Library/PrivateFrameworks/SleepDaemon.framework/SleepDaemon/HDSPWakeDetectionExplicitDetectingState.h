@interface HDSPWakeDetectionExplicitDetectingState : _HDSPWakeDetectionDetectingState

- (id)stateName;
- (id)expirationDate;
- (unsigned long long)activeTypes;
- (BOOL)schedulesExpiration;

@end
