@class NSString, NSMutableDictionary, SSMutableURLRequestProperties, NSDictionary, WebScriptObject, SUXMLHTTPRequestOperation;
@protocol SUScriptXMLHTTPRequestDelegate;

@interface SUScriptXMLHTTPRequest : SUScriptObject {
    NSMutableDictionary *_functions;
    SUXMLHTTPRequestOperation *_operation;
    unsigned long long _readyState;
    SSMutableURLRequestProperties *_requestProperties;
    NSDictionary *_responseHeaders;
    NSString *_responseText;
    unsigned long long _status;
    NSString *_statusText;
    unsigned long long _timeout;
}

@property (weak) id<SUScriptXMLHTTPRequestDelegate> delegate;
@property (readonly) unsigned long long readyState;
@property (readonly, copy) NSString *responseText;
@property (readonly) unsigned long long status;
@property (readonly, copy) NSString *statusText;
@property unsigned long long timeout;
@property (retain) WebScriptObject *onabort;
@property (retain) WebScriptObject *onerror;
@property (retain) WebScriptObject *onload;
@property (retain) WebScriptObject *onloadend;
@property (retain) WebScriptObject *onreadystatechange;
@property (retain) WebScriptObject *ontimeout;

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)a0;
+ (id)webScriptNameForKeyName:(id)a0;

- (void)abort;
- (void)setValue:(id)a0 forHTTPHeaderField:(id)a1;
- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)_className;
- (id)attributeKeys;
- (id)getAllResponseHeaders;
- (id)getResponseHeader:(id)a0;
- (id)scriptAttributeKeys;
- (void)_callFunctionWithName:(id)a0 arguments:(id)a1;
- (id)_scriptObjectForFunctionName:(id)a0;
- (void)_setScriptObject:(id)a0 forFunctionName:(id)a1;
- (void)openWithHTTPMethod:(id)a0 URL:(id)a1 isAsync:(id)a2 username:(id)a3 password:(id)a4;
- (void)sendWithBodyData:(id)a0;

@end
