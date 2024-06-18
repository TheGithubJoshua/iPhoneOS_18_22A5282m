@interface _LSDModifyService : _LSDService

+ (BOOL)isEnabled;
+ (id)dispatchQueue;
+ (id)XPCInterface;
+ (unsigned short)connectionType;
+ (Class)clientClass;

@end
