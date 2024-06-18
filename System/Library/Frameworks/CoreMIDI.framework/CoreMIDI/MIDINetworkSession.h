@class NSString;

@interface MIDINetworkSession : NSObject {
    void *_imp;
}

@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, nonatomic) unsigned long long networkPort;
@property (readonly, nonatomic) NSString *networkName;
@property (readonly, nonatomic) NSString *localName;
@property (nonatomic) unsigned long long connectionPolicy;

+ (id)defaultSession;

- (BOOL)addContact:(id)a0;
- (id)init;
- (id)contacts;
- (BOOL)removeConnection:(id)a0;
- (id)connections;
- (BOOL)addConnection:(id)a0;
- (BOOL)removeContact:(id)a0;
- (void)dealloc;
- (void)contactsChanged;
- (BOOL)addOrRemoveConnection:(id)a0 add:(BOOL)a1;
- (unsigned int)destinationEndpoint;
- (void)refreshBonjourName;
- (void)sessionChanged;
- (void)setStateToEntity;
- (unsigned int)sourceEndpoint;
- (void)updateFromEntity;

@end
