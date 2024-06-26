@interface JPReader : NSObject

@property (nonatomic) struct JetPackReader { } *backing;
@property (copy, nonatomic) id /* block */ fileEntryFound;
@property (copy, nonatomic) id /* block */ dataSegmentFound;
@property (copy, nonatomic) id /* block */ keyForIdentifier;

- (id)init;
- (BOOL)processStream:(id)a0 signatureVerifier:(id)a1 options:(unsigned long long)a2 error:(id *)a3;
- (void).cxx_destruct;
- (void)dealloc;
- (id)convertError;

@end
