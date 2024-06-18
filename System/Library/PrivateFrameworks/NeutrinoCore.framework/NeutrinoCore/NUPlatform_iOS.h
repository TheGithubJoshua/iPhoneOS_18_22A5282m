@interface NUPlatform_iOS : NUPlatform

- (id)init;
- (id)mainDisplay;
- (id)displays;
- (id)deviceForDisplay:(id)a0;
- (BOOL)defaultSupportsLiveVideoRendering;
- (id)mainDevice;
- (BOOL)supportsANE;

@end
