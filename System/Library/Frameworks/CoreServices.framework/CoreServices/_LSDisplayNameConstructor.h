@class NSString;

@interface _LSDisplayNameConstructor : NSObject {
    NSString *_originalName;
    NSString *_baseName;
    NSString *_extension;
    NSString *_secondaryExtension;
    unsigned char _wantsHiddenExtension : 1;
    unsigned char _isFolder : 1;
    unsigned char _isApplication : 1;
    unsigned char _hadNonASCIICharacter : 1;
    unsigned char _hadColonInFSName : 1;
    unsigned char _hadBiDiControlCharacter : 1;
    unsigned char _hadForbiddenCharacter : 1;
}

@property (class, nonatomic) BOOL showAllExtensions;
@property (class, copy, nonatomic) NSString *suffixForRemoteXCTests;

+ (void)setSuffixForRemoteXCTests:(id)a0;
+ (id)displayNameConstructorWithContext:(struct LSContext { id x0; } *)a0 bundle:(unsigned int)a1 bundleClass:(const unsigned int *)a2 node:(id)a3 preferredLocalizations:(id)a4 error:(id *)a5;
+ (id)displayNameConstructorWithContext:(struct LSContext { id x0; } *)a0 node:(id)a1 error:(id *)a2;
+ (id)concatenateBaseName:(id)a0 andExtension:(id)a1;
+ (id)displayNameConstructorsWithContextIfNeeded:(struct Context { struct LSContext *x0; struct LSContext { id x0; } x1; BOOL x2; id x3; } *)a0 bundle:(unsigned int)a1 bundleClass:(const unsigned int *)a2 node:(id)a3 error:(id *)a4;
+ (id)displayNameConstructorWithContextIfNeeded:(struct Context { struct LSContext *x0; struct LSContext { id x0; } x1; BOOL x2; id x3; } *)a0 node:(id)a1 error:(id *)a2;
+ (id)displayNameConstructorWithContextIfNeeded:(struct Context { struct LSContext *x0; struct LSContext { id x0; } x1; BOOL x2; id x3; } *)a0 bundle:(unsigned int)a1 bundleClass:(const unsigned int *)a2 node:(id)a3 preferredLocalizations:(id)a4 error:(id *)a5;
+ (id)displayNameConstructorsWithContext:(struct LSContext { id x0; } *)a0 bundle:(unsigned int)a1 bundleClass:(const unsigned int *)a2 node:(id)a3 error:(id *)a4;
+ (void)getExtensionRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a0 secondaryExtensionRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1 fromFileName:(id)a2 considerConfusables:(BOOL)a3;
+ (id)displayNameConstructorsWithContextIfNeeded:(struct Context { struct LSContext *x0; struct LSContext { id x0; } x1; BOOL x2; id x3; } *)a0 node:(id)a1 error:(id *)a2;
+ (id)suffixForRemoteXCTests;
+ (id)displayNameConstructorsWithContext:(struct LSContext { id x0; } *)a0 node:(id)a1 error:(id *)a2;

- (id)init;
- (id)unlocalizedNameWithContextIfNeeded:(struct Context { struct LSContext *x0; struct LSContext { id x0; } x1; BOOL x2; id x3; } *)a0;
- (void)initContentBitsWithDisplayName:(id)a0 treatAsFSName:(BOOL)a1;
- (void)getTransformedBaseName:(id *)a0 extension:(id *)a1 needsBiDiControlCharacters:(BOOL[2])a2;
- (BOOL)showExtensionWithContextIfNeeded:(struct Context { struct LSContext *x0; struct LSContext { id x0; } x1; BOOL x2; id x3; } *)a0 asIfShowingAllExtensions:(id)a1;
- (void)initNamePartsWithDisplayName:(id)a0;
- (void)initNodeBitsWithContextIfNeeded:(struct Context { struct LSContext *x0; struct LSContext { id x0; } x1; BOOL x2; id x3; } *)a0 node:(id)a1 isDirectory:(BOOL)a2 bundleClass:(const unsigned int *)a3;
- (id)cleanSecondaryExtension:(id)a0;
- (BOOL)canSetExtensionHiddenWithContext:(struct LSContext { id x0; } *)a0;
- (void).cxx_destruct;
- (BOOL)mayHideExtensionWithContextIfNeeded:(struct Context { struct LSContext *x0; struct LSContext { id x0; } x1; BOOL x2; id x3; } *)a0;
- (id)transformBeforeCombining:(id)a0 needsBiDiControlCharacters:(BOOL *)a1;
- (id)unlocalizedNameWithContext:(struct LSContext { id x0; } *)a0;
- (void)getUnlocalizedBaseName:(id *)a0 extension:(id *)a1 requiresAdditionalBiDiControlCharacters:(BOOL *)a2;
- (BOOL)isStringNaturallyRTL:(id)a0;
- (id)insertNameComponentBiDiControlCharacters:(id)a0;
- (id)combineBaseName:(id)a0 extension:(id)a1;
- (id)initWithContextIfNeeded:(struct Context { struct LSContext *x0; struct LSContext { id x0; } x1; BOOL x2; id x3; } *)a0 node:(id)a1 isDirectory:(BOOL)a2 bundleClass:(const unsigned int *)a3 desiredDisplayName:(id)a4 treatAsFSName:(BOOL)a5;
- (BOOL)wantsHiddenExtension;
- (id)unlocalizedNameWithContext:(struct LSContext { id x0; } *)a0 asIfShowingAllExtensions:(id)a1;
- (id)unlocalizedNameWithContextIfNeeded:(struct Context { struct LSContext *x0; struct LSContext { id x0; } x1; BOOL x2; id x3; } *)a0 asIfShowingAllExtensions:(id)a1;
- (id)insertCompleteNameBiDiControlCharacters:(id)a0;

@end
