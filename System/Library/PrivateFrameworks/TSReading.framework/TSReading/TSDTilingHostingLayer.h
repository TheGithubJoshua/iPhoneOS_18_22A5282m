@class TSDInteractiveCanvasController, NSMutableSet;

@interface TSDTilingHostingLayer : TSDNoDefaultImplicitActionLayer {
    NSMutableSet *mDirtyTilingLayers;
}

@property (nonatomic) TSDInteractiveCanvasController *controller;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)dealloc;
- (void)p_commonInit;
- (void)setNeedsDisplayForDirtyTiles:(id)a0;

@end
