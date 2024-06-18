@class NSArray, NSDictionary, NSURL, AVAudioSession, AVAudioFormat;
@protocol AVAudioRecorderDelegate;

@interface AVAudioRecorder : NSObject <AVAudioSessionParticipant> {
    void *_impl;
}

@property (nonatomic) int processToTap;
@property (nonatomic) BOOL instantaneousMetering;
@property (readonly, getter=isRecording) BOOL recording;
@property (readonly) NSURL *url;
@property (readonly) NSDictionary *settings;
@property (readonly) AVAudioFormat *format;
@property (weak) id<AVAudioRecorderDelegate> delegate;
@property (readonly) double currentTime;
@property (readonly) double deviceCurrentTime;
@property (getter=isMeteringEnabled) BOOL meteringEnabled;
@property (copy, nonatomic) NSArray *channelAssignments;
@property (retain) AVAudioSession *audioSession;

- (void)handleInterruption:(id)a0;
- (struct AudioRecorderImpl { id x0; id x1; id x2; id x3; id x4; id x5; unsigned int x6; struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } x7; struct OpaqueAudioFileID *x8; struct OpaqueAudioQueue *x9; long long x10; long long x11; long long x12; double x13; double x14; double x15; unsigned long long x16; char *x17; BOOL x18; BOOL x19; BOOL x20; BOOL x21; BOOL x22; BOOL x23; BOOL x24; BOOL x25; struct AudioQueueLevelMeterState *x26; struct AudioQueueBuffer *x27[4]; struct AudioQueueBuffer *x28; BOOL x29; unsigned long long x30; BOOL x31; int x32; id x33; } *)impl;
- (id)init;
- (void)pause;
- (float)peakPowerForChannel:(unsigned long long)a0;
- (float)averagePowerForChannel:(unsigned long long)a0;
- (void)stop;
- (BOOL)record;
- (void)finalize;
- (void)dealloc;
- (id)baseInit;
- (void)updateMeters;
- (void)endInterruption;
- (void)beginInterruption;
- (BOOL)prepareToRecord;
- (BOOL)deleteRecording;
- (void)endInterruptionWithFlags;
- (void)finishedRecording;
- (id)initWithURL:(id)a0 format:(id)a1 error:(id *)a2;
- (id)initWithURL:(id)a0 settings:(id)a1 error:(id *)a2;
- (void)privCommonCleanup;
- (void)privRemoveSessionPropertyListeners;
- (BOOL)recordAtTime:(double)a0;
- (BOOL)recordAtTime:(double)a0 forDuration:(double)a1;
- (BOOL)recordForDuration:(double)a0;

@end