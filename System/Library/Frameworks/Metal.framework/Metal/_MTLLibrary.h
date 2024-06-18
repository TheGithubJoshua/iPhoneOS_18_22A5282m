@class NSString, NSMutableDictionary, NSArray, NSUUID, NSData;
@protocol MTLDevice;

@interface _MTLLibrary : _MTLObjectWithLabel <MTLLibrarySPI>

@property (readonly, retain, nonatomic) NSMutableDictionary *functionDictionary;
@property (copy) NSString *label;
@property (readonly) id<MTLDevice> device;
@property (readonly, retain) NSArray *functionNames;
@property (readonly, retain) NSArray *externFunctionNames;
@property (readonly) struct MTLLibraryData { void /* function */ **x0; struct { unsigned char x0[32]; } x1; _Atomic int x2; id x3; id x4; } *libraryData;
@property (readonly) struct MTLLibraryContainer { struct MTLPipelineCollection *x0; _Atomic int x1; struct { unsigned char x0[32]; } x2; struct MTLLibraryData *x3; id x4; id x5; id x6; id x7; id x8; } *cacheEntry;
@property (copy) NSString *overrideTriple;
@property (nonatomic) BOOL shaderValidationEnabled;
@property (readonly, copy) NSUUID *libraryIdentifier;
@property (readonly) NSArray *variableList;
@property (readonly) NSData *bitcodeData;
@property (readonly) long long type;
@property (readonly) NSString *installName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)bitcodeData;
- (id)newFunctionWithName:(id)a0 constantValues:(id)a1 functionCache:(id)a2 error:(id *)a3;
- (id)functionNames;
- (id)newSpecializedFunctionWithHash:(const struct { unsigned char x0[32]; } *)a0;
- (id)newExternFunctionWithName:(id)a0;
- (id)newFunctionWithDescriptor:(id)a0 destinationArchive:(id)a1 error:(id *)a2;
- (id)libraryIdentifier;
- (id)newMetalScript;
- (id)newFunctionWithNameInternal:(id)a0;
- (id)newIntersectionFunctionWithDescriptor:(id)a0 error:(id *)a1;
- (id)newFunctionWithName:(id)a0 constantValues:(id)a1 error:(id *)a2;
- (id)newFunctionWithName:(id)a0 constantValues:(id)a1 functionCache:(id)a2 specializedName:(id)a3 error:(id *)a4;
- (void)newFunctionWithDescriptor:(id)a0 destinationArchive:(id)a1 functionCache:(id)a2 completionHandler:(id /* block */)a3;
- (id)newFunctionWithHash:(const struct { unsigned char x0[32]; } *)a0;
- (id)newSpecializedFunctionWithDescriptorInternal:(id)a0 destinationArchive:(id)a1 functionCache:(id)a2 error:(id *)a3;
- (id)overrideTriple;
- (id)newFunctionWithName:(id)a0 constantValues:(id)a1 pipelineLibrary:(id)a2 error:(id *)a3;
- (void)setOverrideTriple:(id)a0;
- (id)externFunctionNames;
- (id)initWithLibraryContainer:(struct MTLLibraryContainer { struct MTLPipelineCollection *x0; _Atomic int x1; struct { unsigned char x0[32]; } x2; struct MTLLibraryData *x3; id x4; id x5; id x6; id x7; id x8; } *)a0 device:(id)a1;
- (BOOL)serializeToURL:(id)a0 error:(id *)a1;
- (void)newFunctionWithName:(id)a0 constantValues:(id)a1 completionHandler:(id /* block */)a2;
- (void)newFunctionWithName:(id)a0 constantValues:(id)a1 functionCache:(id)a2 specializedName:(id)a3 completionHandler:(id /* block */)a4;
- (void)newFunctionWithName:(id)a0 constantValues:(id)a1 pipelineLibrary:(id)a2 completionHandler:(id /* block */)a3;
- (id)bitCodeWithHash:(const struct { unsigned char x0[32]; } *)a0;
- (void)dealloc;
- (id)libraryDataContents;
- (long long)type;
- (id)formattedDescription:(unsigned long long)a0;
- (void)newFunctionWithDescriptor:(id)a0 completionHandler:(id /* block */)a1;
- (id)newFunctionWithName:(id)a0;
- (id)newFunctionWithDescriptor:(id)a0 error:(id *)a1;
- (void)newIntersectionFunctionWithDescriptor:(id)a0 completionHandler:(id /* block */)a1;

@end
