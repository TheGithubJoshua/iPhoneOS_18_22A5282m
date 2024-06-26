@class APKRemoteInspectorCSSAgent, APKRemoteInspectorPageAgent, JSContext, APKRemoteInspectorNetworkAgent, APKRemoteInspectorDOMAgent;

@interface APKRemoteInspector : NSObject

@property (readonly, nonatomic) JSContext *context;
@property (readonly, nonatomic, getter=isConnected) BOOL connected;
@property (readonly, nonatomic) APKRemoteInspectorCSSAgent *CSSAgent;
@property (readonly, nonatomic) APKRemoteInspectorDOMAgent *DOMAgent;
@property (readonly, nonatomic) APKRemoteInspectorNetworkAgent *networkAgent;
@property (readonly, nonatomic) APKRemoteInspectorPageAgent *pageAgent;

+ (id)computedStyleWithName:(id)a0 value:(id)a1;
+ (id)nodeWithIdentifier:(int)a0 name:(id)a1 type:(long long)a2 value:(id)a3;
+ (id)resourceWithURL:(id)a0 type:(long long)a1 MIMEType:(id)a2;
+ (id)styleWithProperties:(id)a0;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithName:(id)a0;

@end
