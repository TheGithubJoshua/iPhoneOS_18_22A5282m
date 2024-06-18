@class NSNumber, NSData;

@interface NEFlowDivertFileHandle : NEFileHandle

@property (readonly) NSNumber *controlUnit;
@property (readonly) NSData *keyMaterial;

- (id)initFlowDivertDataSocket;
- (id)initFromDictionary:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initFlowDivertControlSocket;
- (id)initFlowDivertControlSocketDisableAppMap:(BOOL)a0;
- (unsigned long long)type;
- (id)dictionary;

@end
