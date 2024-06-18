@class NSString;

@interface SBSApplicationShortcutSystemIcon : SBSApplicationShortcutIcon

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) NSString *systemImageName;

- (id)initWithType:(long long)a0;
- (unsigned long long)hash;
- (void)encodeWithXPCDictionary:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithXPCDictionary:(id)a0;
- (id)initWithSystemImageName:(id)a0;
- (id)_initForSubclass;

@end
