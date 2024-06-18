@class CAContext, NSString;

@interface FBSSceneLayer : NSObject <BSXPCCoding> {
    double _level;
}

@property (readonly, nonatomic, getter=_context) CAContext *context;
@property (readonly, nonatomic) long long alignment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_initWithCAContext:(id)a0 fallbackLevel:(double)a1;
- (BOOL)isCAContextLayer;
- (id)_succinctDescription;
- (BOOL)isExternalSceneLayer;
- (double)_unsafe_level;
- (BOOL)isKeyboardProxyLayer;
- (void)_unsafe_captureLevel;
- (id)init;
- (BOOL)isKeyboardLayer;
- (void)encodeWithXPCDictionary:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithXPCDictionary:(id)a0;

@end
