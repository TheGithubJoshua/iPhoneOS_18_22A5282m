@class NSString;

@interface SBSApplicationShortcutTemplateIcon : SBSApplicationShortcutIcon

@property (readonly, nonatomic) NSString *templateImageName;

- (unsigned long long)hash;
- (void)encodeWithXPCDictionary:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithXPCDictionary:(id)a0;
- (id)initWithTemplateImageName:(id)a0;
- (id)_initForSubclass;

@end
