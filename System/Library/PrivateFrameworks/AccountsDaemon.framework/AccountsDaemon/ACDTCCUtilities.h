@interface ACDTCCUtilities : NSObject

+ (id)allTCCStatesForAccountTypeID:(id)a0;
+ (BOOL)setTCCStateForClient:(id)a0 accountTypeID:(id)a1 toGranted:(BOOL)a2;
+ (BOOL)TCCSupportedForAccountTypeID:(id)a0;
+ (BOOL)clearTCCStateForClient:(id)a0 accountTypeID:(id)a1;
+ (struct __CFString { } *)_TCCServiceForAccountTypeID:(id)a0;
+ (BOOL)clearAllTCCStatesForAccountTypeID:(id)a0;
+ (int)TCCStateForClient:(id)a0 accountTypeID:(id)a1;

@end
