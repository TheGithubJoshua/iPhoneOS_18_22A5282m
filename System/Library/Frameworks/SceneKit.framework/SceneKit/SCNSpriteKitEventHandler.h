@class SKScene, NSMutableDictionary;

@interface SCNSpriteKitEventHandler : NSObject {
    NSMutableDictionary *_touchMap;
    BOOL _mouseIsDown;
    BOOL _rightMouseIsDown;
}

@property (retain, nonatomic) SKScene *scene;

- (id)init;
- (BOOL)touchesMoved:(id)a0 withEvent:(id)a1;
- (BOOL)touchesBegan:(id)a0 withEvent:(id)a1;
- (BOOL)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)dealloc;
- (BOOL)touchesEnded:(id)a0 withEvent:(id)a1;

@end