@class _PASXPCClientHelper;

@interface ATXUserEducationSuggestionConnector : NSObject {
    _PASXPCClientHelper *_xpcClientHelper;
}

- (id)initWithOurInterfaceFactory:(void /* function */ *)a0 theirInterfaceFactory:(void /* function */ *)a1 ourServiceName:(id)a2 theirServiceName:(id)a3 requestHandler:(id)a4;
- (void).cxx_destruct;
- (id)remoteObjectProxy;

@end
