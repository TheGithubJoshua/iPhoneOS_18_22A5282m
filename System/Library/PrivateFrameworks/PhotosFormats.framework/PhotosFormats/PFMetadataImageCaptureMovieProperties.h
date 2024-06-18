@class NSDictionary;

@interface PFMetadataImageCaptureMovieProperties : PFMetadataCore {
    NSDictionary *_iccMovieProperties;
}

- (id)_makeGPSProperties;
- (id)livePhotoPairingIdentifier;
- (id)plistForEncoding;
- (id)initWithImageCaptureMovieProperties:(id)a0 contentType:(id)a1 timeZoneLookup:(id)a2;
- (BOOL)configureWithMetadataPlist:(id)a0;
- (void).cxx_destruct;
- (BOOL)isSloMo;
- (id)durationTimeInterval;
- (BOOL)isTimelapse;
- (id)originalFilenamee;

@end
