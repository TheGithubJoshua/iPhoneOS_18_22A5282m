@interface CXSetVideoPresentationStateCallAction : CXCallAction

@property (nonatomic) long long videoPresentationState;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)customDescription;
- (id)sanitizedCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCallUUID:(id)a0 videoPresentationState:(long long)a1;
- (void)updateCopy:(id)a0 withZone:(struct _NSZone { } *)a1;

@end
