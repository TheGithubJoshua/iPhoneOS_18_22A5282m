@class NSString, NSArray;

@interface WLMessageSMILContext : NSObject <NSXMLParserDelegate> {
    BOOL _inBody;
    BOOL _inPar;
}

@property (readonly, nonatomic) NSString *characters;
@property (readonly, nonatomic) NSArray *parts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)parser:(id)a0 didEndElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3;
- (void)parser:(id)a0 didStartElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3 attributes:(id)a4;
- (void).cxx_destruct;
- (void)parser:(id)a0 foundCharacters:(id)a1;

@end
