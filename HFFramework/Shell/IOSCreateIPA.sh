echo "Start Building"
project_path=/Users/alan/.jenkins/workspace/IOSClient/Unity/Release/iOS
scheme_name="Unity-iPhone" 
export_plist=/Users/alan/Work/TYCH/Client/Unity/ExportOptions.plist
project_name="Unity-iPhone.xcodeproj"
build_output_dir="build"
configuration="Release"
archivePath=${build_output_dir}/${scheme_name}.xcarchive
 
cd $project_path
 
echo "Clean Xcode"
 
xcodebuild clean
 
xcodebuild archive -project "${project_name}" -scheme "${scheme_name}" -configuration "$configuration" -archivePath "${archivePath}"
 
#xcrun obsoleted
#xcrun -sdk iphoneos PackageApplication -v ${build_path}/Release-iphoneos/rok.app -o ${build_path}/${ipa_name}.ipa
 
xcodebuild -exportArchive -archivePath "${archivePath}" -exportOptionsPlist "${export_plist}" -exportPath "${build_output_dir}"
 
open ${project_path}
 
echo "Successfully exported and signed the ipa file"
