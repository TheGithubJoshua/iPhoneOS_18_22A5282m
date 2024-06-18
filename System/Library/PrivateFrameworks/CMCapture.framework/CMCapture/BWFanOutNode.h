@interface BWFanOutNode : BWNode {
    id *_outputsCArray;
    BOOL *_outputsDiscardsAttachedMedia;
    int _outputsCount;
}

+ (void)initialize;

- (void)handleNodeError:(id)a0 forInput:(id)a1;
- (void)handleDroppedSample:(id)a0 forInput:(id)a1;
- (void)setDiscardsAttachedMedia:(BOOL)a0 forOutputIndex:(int)a1;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (BOOL)hasNonLiveConfigurationChanges;
- (id)nodeType;
- (id)nodeSubType;
- (void)configurationWithID:(long long)a0 updatedFormat:(id)a1 didBecomeLiveForInput:(id)a2;
- (id)initWithFanOutCount:(int)a0 mediaType:(unsigned int)a1;
- (void)didReachEndOfDataForInput:(id)a0;
- (void)makeCurrentConfigurationLive;
- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (void)dealloc;

@end
