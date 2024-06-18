@class NSXPCConnection;
@protocol VMClientXPCProtocol;

@interface VMClientWrapper : NSObject

@property (class, readonly, nonatomic, getter=isVMXPCAvailable) BOOL vmXPCAvailable;

@property (retain, nonatomic) NSXPCConnection *clientConnection;
@property (weak, nonatomic) id<VMClientXPCProtocol> manager;

+ (id)voicemailServerXPCInterface;
+ (id)voicemailClientXPCInterface;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;

@end
