@class NSDictionary;

@interface PFMetadataLegacyMovieProperties : PFMetadataCore {
    NSDictionary *_audioVideoProperties;
}

- (id)cameraModel;
- (id)_makeGeometryProperties;
- (id)cameraMake;
- (id)_makeGPSProperties;
- (id)initWithAVProxyData:(id)a0 timeZoneLookup:(id)a1;
- (id)plistForEncoding;
- (id)nominalFrameRate;
- (BOOL)configureWithMetadataPlist:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)_makeDateTimeProperties;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)software;
- (id)audioSampleRate;
- (BOOL)isMovie;
- (BOOL)isSloMo;
- (id)audioDataRate;
- (id)audioTrackFormat;
- (id)durationTimeInterval;
- (BOOL)isTimelapse;
- (id)videoCodecName;
- (void)_enumerateTracksOfType:(unsigned int)a0 withBlock:(id /* block */)a1;
- (struct opaqueCMFormatDescription { } *)_formatDescription;
- (id)_primaryAudioTrack;
- (id)_primaryVideoTrack;
- (id)audioTrackFormatFlags;
- (id)initWithMetadataPlist:(id)a0 timeZoneLookup:(id)a1;
- (id)videoDataRate;

@end
