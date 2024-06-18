@class NSString, NSUUID, NSXPCConnection;

@interface MOLocalSettingsStore : MOSettingsStore <MOSettingsReader, MOSettingsWriter>

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *container;
@property (retain, nonatomic) NSUUID *persistenceRecordIdentifier;
@property (readonly, nonatomic) NSXPCConnection *xpcConnection;

+ (id)new;

- (id)init;
- (id)reader;
- (void).cxx_destruct;
- (id)valueForSetting:(id)a0 inGroup:(id)a1;
- (id)initWithName:(id)a0;
- (id)writer;
- (void)clearAllSettings;
- (id)initWithName:(id)a0 sharedContainer:(id)a1;
- (id)initWithSharedContainer:(id)a0;
- (void)removeValueForSetting:(id)a0 inGroup:(id)a1;
- (void)setValue:(id)a0 forSetting:(id)a1 inGroup:(id)a2;

@end
