@interface IDSBlastDoorInterfaceInternal : NSObject {
    void /* unknown type, empty encoding */ bd;
}

- (id)init;
- (void)unpackCommandWebTunnelResponsePayload:(id)a0 resultHandler:(id /* block */)a1;
- (void)unpackGeneralCommandPayload:(id)a0 resultHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (void)unpackCommandResponsePayload:(id)a0 resultHandler:(id /* block */)a1;
- (void)unpackPayloadDictionary:(id)a0 resultHandler:(id /* block */)a1;

@end
