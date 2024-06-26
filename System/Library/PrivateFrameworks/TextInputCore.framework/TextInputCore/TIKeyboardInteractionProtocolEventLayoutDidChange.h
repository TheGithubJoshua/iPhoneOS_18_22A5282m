@class TIKeyboardLayout, NSString;

@interface TIKeyboardInteractionProtocolEventLayoutDidChange : TIKeyboardInteractionProtocolBase <TIKeyboardInteractionProtocolEvent>

@property (readonly, nonatomic) TIKeyboardLayout *keyLayout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)sendTo:(id)a0;
- (id)initWithLayout:(id)a0 keyboardState:(id)a1;

@end
