@interface AVCompositionFormatReaderInspector : AVFormatReaderInspector

- (BOOL)isPlayable;
- (BOOL)isReadable;
- (BOOL)isCompatibleWithAirPlayVideo;
- (BOOL)isCompatibleWithSavedPhotosAlbum;
- (BOOL)isComposable;
- (BOOL)isCompatibleWithPhotosTranscodingServiceWithOptions:(id)a0;
- (BOOL)isExportable;

@end
