@interface BWSynchronizerNode : BWNode {
    struct OpaqueCMClock { } *_sourceClock;
    struct OpaqueCMClock { } *_masterClock;
    struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } sourceTime; struct { long long value; int timescale; unsigned int flags; long long epoch; } syncedTime; } _ptsSyncHistory[16];
    int _oldestPTSSyncHistoryElement;
    int _newestPTSSyncHistoryElement;
}

+ (void)initialize;

- (struct OpaqueCMClock { } *)masterClock;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)handleDroppedSample:(id)a0 forInput:(id)a1;
- (struct OpaqueCMClock { } *)sourceClock;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (id)nodeType;
- (void)setMasterClock:(struct OpaqueCMClock { } *)a0;
- (id)nodeSubType;
- (void)setSourceClock:(struct OpaqueCMClock { } *)a0;
- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (id)initWithMediaType:(unsigned int)a0;
- (void)dealloc;

@end
