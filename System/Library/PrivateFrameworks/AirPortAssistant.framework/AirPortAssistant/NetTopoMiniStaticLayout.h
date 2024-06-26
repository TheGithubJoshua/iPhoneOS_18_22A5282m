@class NSArray, CALayer, NSMutableArray;

@interface NetTopoMiniStaticLayout : NSObject {
    id _owningView;
    NSMutableArray *_connectionLayers;
}

@property (retain, nonatomic) NSArray *topoDevicesDescriptor;
@property (retain, nonatomic) CALayer *containerLayer;
@property (readonly, nonatomic) NSMutableArray *topoDeviceLayers;
@property (nonatomic) int layoutOptions;
@property (retain, nonatomic) id owningView;

- (void)performLayout;
- (void)dealloc;
- (void)createLayoutForDevices:(id)a0;
- (void)destroyDeviceLayers;
- (struct CGImage { } *)imageForDeviceSpec:(id)a0 wantSmall:(BOOL)a1 forContentsScale:(double)a2;
- (id)initWithContainerLayer:(id)a0 andOptions:(int)a1;

@end
