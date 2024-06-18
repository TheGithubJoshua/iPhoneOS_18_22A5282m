@class NSString, NSMutableDictionary, UITraitCollection;

@interface UIContentUnavailableConfigurationState : NSObject <_UIContentUnavailableConfigurationStateReadonly, UIConfigurationState> {
    unsigned long long _mutations;
    NSMutableDictionary *_customStates;
    struct { } _stateFlags;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long _mutations;
@property (retain, nonatomic) UITraitCollection *traitCollection;
@property (retain, nonatomic) NSString *searchControllerText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCoder:(id)a0;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (void)setCustomState:(id)a0 forKey:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)objectForKeyedSubscript:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithTraitCollection:(id)a0;
- (id)customStateForKey:(id)a0;

@end
