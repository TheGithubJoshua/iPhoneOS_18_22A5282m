@class NSArray, NSUUID;

@interface LSPlugInQueryWithUnits : LSPlugInQuery {
    NSArray *_pluginUnits;
    NSUUID *_dbUUID;
}

+ (BOOL)supportsSecureCoding;

- (void)_enumerateWithXPCConnection:(id)a0 block:(id /* block */)a1;
- (id)initWithCoder:(id)a0;
- (id)initWithPlugInUnits:(id)a0 forDatabaseWithUUID:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
