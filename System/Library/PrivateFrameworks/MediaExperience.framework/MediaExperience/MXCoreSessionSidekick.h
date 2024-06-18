@class NSString;

@interface MXCoreSessionSidekick : MXCoreSessionBase

@property (retain, nonatomic) NSString *remoteDeviceID;

- (int)setPropertyForKey:(id)a0 value:(id)a1;
- (int)activate;
- (void)dealloc;
- (int)_setPropertyForKey:(id)a0 value:(id)a1;
- (int)_copyPropertyForKey:(id)a0 valueOut:(id *)a1;
- (int)copyPropertyForKey:(id)a0 valueOut:(id *)a1;
- (int)_activate;
- (int)_deactivate:(BOOL)a0 postInterruptionNotification:(BOOL)a1;
- (id)_initWithRemoteDeviceID:(id)a0;
- (int)deactivate:(BOOL)a0 postInterruptionNotification:(BOOL)a1;
- (id)initWithRemoteDeviceID:(id)a0;
- (BOOL)isCategoryValid:(id)a0;
- (BOOL)isModeValidForCategory:(id)a0;

@end
