@class NSString;

@interface SBHSpecialWidgetDescriptor : CHSWidgetDescriptor {
    NSString *_displayName;
    NSString *_description;
}

@property (nonatomic) unsigned long long type;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)initWithType:(unsigned long long)a0 supportedSizeClasses:(unsigned long long)a1;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)initWithType:(unsigned long long)a0;
- (id)displayName;
- (id)backgroundColor;
- (id)_initWithType:(unsigned long long)a0 supportedSizeClasses:(unsigned long long)a1;
- (unsigned long long)hash;
- (id)widgetDescription;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescriptionBuilder;
- (BOOL)isEqual:(id)a0;
- (BOOL)sbh_canBeAddedToStack;
- (id)accentColor;

@end
