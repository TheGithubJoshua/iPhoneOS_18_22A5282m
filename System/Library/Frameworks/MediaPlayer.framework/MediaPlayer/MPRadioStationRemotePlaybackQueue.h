@class NSString;

@interface MPRadioStationRemotePlaybackQueue : MPRemotePlaybackQueue

@property (readonly, nonatomic) long long stationID;
@property (readonly, nonatomic) NSString *stationStringID;

+ (BOOL)supportsSecureCoding;

- (BOOL)verifyWithError:(id *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithMediaRemotePlaybackQueue:(struct _MRSystemAppPlaybackQueue { } *)a0 options:(id)a1;

@end
