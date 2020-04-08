// <auto-generated>
//     Generated by the protocol buffer compiler.  DO NOT EDIT!
//     source: friend.proto
// </auto-generated>
#pragma warning disable 1591, 0612, 3021
#region Designer generated code

using pb = global::Google.Protobuf;
using pbc = global::Google.Protobuf.Collections;
using pbr = global::Google.Protobuf.Reflection;
using scg = global::System.Collections.Generic;
namespace Centersdk.Protobuf {

  /// <summary>Holder for reflection information generated from friend.proto</summary>
  public static partial class FriendReflection {

    #region Descriptor
    /// <summary>File descriptor for friend.proto</summary>
    public static pbr::FileDescriptor Descriptor {
      get { return descriptor; }
    }
    private static pbr::FileDescriptor descriptor;

    static FriendReflection() {
      byte[] descriptorData = global::System.Convert.FromBase64String(
          string.Concat(
            "CgxmcmllbmQucHJvdG8SEmNlbnRlcnNkay5wcm90b2J1ZiI+CgtGcmllbmRB",
            "cnJheRIvCgdmcmllbmRzGAEgAygLMh4uY2VudGVyc2RrLnByb3RvYnVmLkZy",
            "aWVuZEluZm8ieQoKRnJpZW5kSW5mbxIOCgZyb2xlSWQYASABKAMSDAoEbmFt",
            "ZRgCIAEoCRIMCgR0eXBlGAMgASgFEg0KBWxldmVsGAQgASgFEgsKA3NleBgF",
            "IAEoBRIRCgloZWFkSW1nSWQYBiABKAUSEAoIZ29vZEZlZWwYByABKAVCLAod",
            "Y29tLmhvb2xhaS5jZW50ZXJzZGsucHJvdG9idWZCC0ZyaWVuZFByb3RvYgZw",
            "cm90bzM="));
      descriptor = pbr::FileDescriptor.FromGeneratedCode(descriptorData,
          new pbr::FileDescriptor[] { },
          new pbr::GeneratedClrTypeInfo(null, new pbr::GeneratedClrTypeInfo[] {
            new pbr::GeneratedClrTypeInfo(typeof(global::Centersdk.Protobuf.FriendArray), global::Centersdk.Protobuf.FriendArray.Parser, new[]{ "Friends" }, null, null, null),
            new pbr::GeneratedClrTypeInfo(typeof(global::Centersdk.Protobuf.FriendInfo), global::Centersdk.Protobuf.FriendInfo.Parser, new[]{ "RoleId", "Name", "Type", "Level", "Sex", "HeadImgId", "GoodFeel" }, null, null, null)
          }));
    }
    #endregion

  }
  #region Messages
  /// <summary>
  ///好友列表
  /// </summary>
  public sealed partial class FriendArray : pb::IMessage<FriendArray> {
    private static readonly pb::MessageParser<FriendArray> _parser = new pb::MessageParser<FriendArray>(() => new FriendArray());
    private pb::UnknownFieldSet _unknownFields;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public static pb::MessageParser<FriendArray> Parser { get { return _parser; } }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public static pbr::MessageDescriptor Descriptor {
      get { return global::Centersdk.Protobuf.FriendReflection.Descriptor.MessageTypes[0]; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    pbr::MessageDescriptor pb::IMessage.Descriptor {
      get { return Descriptor; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public FriendArray() {
      OnConstruction();
    }

    partial void OnConstruction();

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public FriendArray(FriendArray other) : this() {
      friends_ = other.friends_.Clone();
      _unknownFields = pb::UnknownFieldSet.Clone(other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public FriendArray Clone() {
      return new FriendArray(this);
    }

    /// <summary>Field number for the "friends" field.</summary>
    public const int FriendsFieldNumber = 1;
    private static readonly pb::FieldCodec<global::Centersdk.Protobuf.FriendInfo> _repeated_friends_codec
        = pb::FieldCodec.ForMessage(10, global::Centersdk.Protobuf.FriendInfo.Parser);
    private readonly pbc::RepeatedField<global::Centersdk.Protobuf.FriendInfo> friends_ = new pbc::RepeatedField<global::Centersdk.Protobuf.FriendInfo>();
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public pbc::RepeatedField<global::Centersdk.Protobuf.FriendInfo> Friends {
      get { return friends_; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public override bool Equals(object other) {
      return Equals(other as FriendArray);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public bool Equals(FriendArray other) {
      if (ReferenceEquals(other, null)) {
        return false;
      }
      if (ReferenceEquals(other, this)) {
        return true;
      }
      if(!friends_.Equals(other.friends_)) return false;
      return Equals(_unknownFields, other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public override int GetHashCode() {
      int hash = 1;
      hash ^= friends_.GetHashCode();
      if (_unknownFields != null) {
        hash ^= _unknownFields.GetHashCode();
      }
      return hash;
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public override string ToString() {
      return pb::JsonFormatter.ToDiagnosticString(this);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public void WriteTo(pb::CodedOutputStream output) {
      friends_.WriteTo(output, _repeated_friends_codec);
      if (_unknownFields != null) {
        _unknownFields.WriteTo(output);
      }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public int CalculateSize() {
      int size = 0;
      size += friends_.CalculateSize(_repeated_friends_codec);
      if (_unknownFields != null) {
        size += _unknownFields.CalculateSize();
      }
      return size;
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public void MergeFrom(FriendArray other) {
      if (other == null) {
        return;
      }
      friends_.Add(other.friends_);
      _unknownFields = pb::UnknownFieldSet.MergeFrom(_unknownFields, other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public void MergeFrom(pb::CodedInputStream input) {
      uint tag;
      while ((tag = input.ReadTag()) != 0) {
        switch(tag) {
          default:
            _unknownFields = pb::UnknownFieldSet.MergeFieldFrom(_unknownFields, input);
            break;
          case 10: {
            friends_.AddEntriesFrom(input, _repeated_friends_codec);
            break;
          }
        }
      }
    }

  }

  /// <summary>
  ///好友信息
  /// </summary>
  public sealed partial class FriendInfo : pb::IMessage<FriendInfo> {
    private static readonly pb::MessageParser<FriendInfo> _parser = new pb::MessageParser<FriendInfo>(() => new FriendInfo());
    private pb::UnknownFieldSet _unknownFields;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public static pb::MessageParser<FriendInfo> Parser { get { return _parser; } }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public static pbr::MessageDescriptor Descriptor {
      get { return global::Centersdk.Protobuf.FriendReflection.Descriptor.MessageTypes[1]; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    pbr::MessageDescriptor pb::IMessage.Descriptor {
      get { return Descriptor; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public FriendInfo() {
      OnConstruction();
    }

    partial void OnConstruction();

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public FriendInfo(FriendInfo other) : this() {
      roleId_ = other.roleId_;
      name_ = other.name_;
      type_ = other.type_;
      level_ = other.level_;
      sex_ = other.sex_;
      headImgId_ = other.headImgId_;
      goodFeel_ = other.goodFeel_;
      _unknownFields = pb::UnknownFieldSet.Clone(other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public FriendInfo Clone() {
      return new FriendInfo(this);
    }

    /// <summary>Field number for the "roleId" field.</summary>
    public const int RoleIdFieldNumber = 1;
    private long roleId_;
    /// <summary>
    /// 全局唯一角色ID
    /// </summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public long RoleId {
      get { return roleId_; }
      set {
        roleId_ = value;
      }
    }

    /// <summary>Field number for the "name" field.</summary>
    public const int NameFieldNumber = 2;
    private string name_ = "";
    /// <summary>
    /// 角色名称
    /// </summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public string Name {
      get { return name_; }
      set {
        name_ = pb::ProtoPreconditions.CheckNotNull(value, "value");
      }
    }

    /// <summary>Field number for the "type" field.</summary>
    public const int TypeFieldNumber = 3;
    private int type_;
    /// <summary>
    /// 角色类型
    /// </summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public int Type {
      get { return type_; }
      set {
        type_ = value;
      }
    }

    /// <summary>Field number for the "level" field.</summary>
    public const int LevelFieldNumber = 4;
    private int level_;
    /// <summary>
    /// 角色等级
    /// </summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public int Level {
      get { return level_; }
      set {
        level_ = value;
      }
    }

    /// <summary>Field number for the "sex" field.</summary>
    public const int SexFieldNumber = 5;
    private int sex_;
    /// <summary>
    /// 性别
    /// </summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public int Sex {
      get { return sex_; }
      set {
        sex_ = value;
      }
    }

    /// <summary>Field number for the "headImgId" field.</summary>
    public const int HeadImgIdFieldNumber = 6;
    private int headImgId_;
    /// <summary>
    /// 头像ID
    /// </summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public int HeadImgId {
      get { return headImgId_; }
      set {
        headImgId_ = value;
      }
    }

    /// <summary>Field number for the "goodFeel" field.</summary>
    public const int GoodFeelFieldNumber = 7;
    private int goodFeel_;
    /// <summary>
    /// 好感度
    /// </summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public int GoodFeel {
      get { return goodFeel_; }
      set {
        goodFeel_ = value;
      }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public override bool Equals(object other) {
      return Equals(other as FriendInfo);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public bool Equals(FriendInfo other) {
      if (ReferenceEquals(other, null)) {
        return false;
      }
      if (ReferenceEquals(other, this)) {
        return true;
      }
      if (RoleId != other.RoleId) return false;
      if (Name != other.Name) return false;
      if (Type != other.Type) return false;
      if (Level != other.Level) return false;
      if (Sex != other.Sex) return false;
      if (HeadImgId != other.HeadImgId) return false;
      if (GoodFeel != other.GoodFeel) return false;
      return Equals(_unknownFields, other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public override int GetHashCode() {
      int hash = 1;
      if (RoleId != 0L) hash ^= RoleId.GetHashCode();
      if (Name.Length != 0) hash ^= Name.GetHashCode();
      if (Type != 0) hash ^= Type.GetHashCode();
      if (Level != 0) hash ^= Level.GetHashCode();
      if (Sex != 0) hash ^= Sex.GetHashCode();
      if (HeadImgId != 0) hash ^= HeadImgId.GetHashCode();
      if (GoodFeel != 0) hash ^= GoodFeel.GetHashCode();
      if (_unknownFields != null) {
        hash ^= _unknownFields.GetHashCode();
      }
      return hash;
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public override string ToString() {
      return pb::JsonFormatter.ToDiagnosticString(this);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public void WriteTo(pb::CodedOutputStream output) {
      if (RoleId != 0L) {
        output.WriteRawTag(8);
        output.WriteInt64(RoleId);
      }
      if (Name.Length != 0) {
        output.WriteRawTag(18);
        output.WriteString(Name);
      }
      if (Type != 0) {
        output.WriteRawTag(24);
        output.WriteInt32(Type);
      }
      if (Level != 0) {
        output.WriteRawTag(32);
        output.WriteInt32(Level);
      }
      if (Sex != 0) {
        output.WriteRawTag(40);
        output.WriteInt32(Sex);
      }
      if (HeadImgId != 0) {
        output.WriteRawTag(48);
        output.WriteInt32(HeadImgId);
      }
      if (GoodFeel != 0) {
        output.WriteRawTag(56);
        output.WriteInt32(GoodFeel);
      }
      if (_unknownFields != null) {
        _unknownFields.WriteTo(output);
      }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public int CalculateSize() {
      int size = 0;
      if (RoleId != 0L) {
        size += 1 + pb::CodedOutputStream.ComputeInt64Size(RoleId);
      }
      if (Name.Length != 0) {
        size += 1 + pb::CodedOutputStream.ComputeStringSize(Name);
      }
      if (Type != 0) {
        size += 1 + pb::CodedOutputStream.ComputeInt32Size(Type);
      }
      if (Level != 0) {
        size += 1 + pb::CodedOutputStream.ComputeInt32Size(Level);
      }
      if (Sex != 0) {
        size += 1 + pb::CodedOutputStream.ComputeInt32Size(Sex);
      }
      if (HeadImgId != 0) {
        size += 1 + pb::CodedOutputStream.ComputeInt32Size(HeadImgId);
      }
      if (GoodFeel != 0) {
        size += 1 + pb::CodedOutputStream.ComputeInt32Size(GoodFeel);
      }
      if (_unknownFields != null) {
        size += _unknownFields.CalculateSize();
      }
      return size;
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public void MergeFrom(FriendInfo other) {
      if (other == null) {
        return;
      }
      if (other.RoleId != 0L) {
        RoleId = other.RoleId;
      }
      if (other.Name.Length != 0) {
        Name = other.Name;
      }
      if (other.Type != 0) {
        Type = other.Type;
      }
      if (other.Level != 0) {
        Level = other.Level;
      }
      if (other.Sex != 0) {
        Sex = other.Sex;
      }
      if (other.HeadImgId != 0) {
        HeadImgId = other.HeadImgId;
      }
      if (other.GoodFeel != 0) {
        GoodFeel = other.GoodFeel;
      }
      _unknownFields = pb::UnknownFieldSet.MergeFrom(_unknownFields, other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public void MergeFrom(pb::CodedInputStream input) {
      uint tag;
      while ((tag = input.ReadTag()) != 0) {
        switch(tag) {
          default:
            _unknownFields = pb::UnknownFieldSet.MergeFieldFrom(_unknownFields, input);
            break;
          case 8: {
            RoleId = input.ReadInt64();
            break;
          }
          case 18: {
            Name = input.ReadString();
            break;
          }
          case 24: {
            Type = input.ReadInt32();
            break;
          }
          case 32: {
            Level = input.ReadInt32();
            break;
          }
          case 40: {
            Sex = input.ReadInt32();
            break;
          }
          case 48: {
            HeadImgId = input.ReadInt32();
            break;
          }
          case 56: {
            GoodFeel = input.ReadInt32();
            break;
          }
        }
      }
    }

  }

  #endregion

}

#endregion Designer generated code