@class NSUUID, NWEndpoint, NWParameters;

@interface NENexusFlowDivertFlow : NENexusFlow {
    NSUUID *_clientID;
    NWEndpoint *_internalEndpoint;
    NWParameters *_internalParameters;
    struct _NEFlow { } *_flowDivertFlow;
}

- (id)parameters;
- (id)clientIdentifier;
- (id)endpoint;
- (void).cxx_destruct;
- (void)dealloc;

@end
