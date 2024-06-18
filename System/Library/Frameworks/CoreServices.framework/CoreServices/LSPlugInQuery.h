@interface LSPlugInQuery : _LSQuery

+ (BOOL)supportsSecureCoding;
+ (id)pluginQueryWithUUID:(id)a0;
+ (id)pluginQueryWithQueryDictionary:(id)a0 applyFilter:(id /* block */)a1;
+ (id)pluginQueryWithURL:(id)a0;
+ (id)pluginQuery;
+ (id)pluginQueryWithIdentifier:(id)a0;

- (void)_enumerateWithXPCConnection:(id)a0 block:(id /* block */)a1;
- (void)sort:(BOOL)a0 pluginIDs:(id)a1 andYield:(id /* block */)a2 context:(struct LSContext { id x0; } *)a3;
- (BOOL)_remoteResolutionIsExpensive;
- (id)initWithCoder:(id)a0;
- (BOOL)_requiresDatabaseMappingEntitlement;
- (id)_init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;

@end
