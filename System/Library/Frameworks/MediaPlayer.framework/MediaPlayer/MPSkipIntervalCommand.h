@class NSArray;

@interface MPSkipIntervalCommand : MPRemoteCommand

@property (copy, nonatomic) NSArray *preferredIntervals;

- (id)_mediaRemoteCommandInfoOptions;
- (id)initWithMediaRemoteCommandType:(unsigned int)a0;
- (void).cxx_destruct;
- (id)newCommandEventWithInterval:(double)a0;

@end
