@interface AVStreamDataInspectionOnlyAsset : AVURLAsset

- (BOOL)isPlayable;
- (id)initWithFigAsset:(struct OpaqueFigAsset { } *)a0;
- (BOOL)isReadable;
- (BOOL)isCompatibleWithAirPlayVideo;
- (BOOL)isCompatibleWithSavedPhotosAlbum;
- (BOOL)isComposable;
- (BOOL)isCompatibleWithPhotosTranscodingServiceWithOptions:(id)a0;
- (BOOL)isExportable;

@end
