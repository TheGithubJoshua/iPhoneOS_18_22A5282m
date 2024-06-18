@class AVAssetReaderTrackOutput, AVAssetReader;

@interface PADAVSerialAssetReader : NSObject {
    AVAssetReader *_assetReader;
    AVAssetReaderTrackOutput *_output;
    BOOL _isReading;
}

- (void).cxx_destruct;
- (void)close;
- (BOOL)_setupAssetReaderWithVideoURL:(id)a0 error:(id *)a1;
- (id)initWithVideoURL:(id)a0 error:(id *)a1;
- (id)retrieveNextFrame;

@end
