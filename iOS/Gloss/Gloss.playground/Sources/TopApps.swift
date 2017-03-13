import Foundation

public struct TopApps: Decodable {
    
    // 1
    public let feed: Feed?
    
    // 2
    public init?(json: JSON) {
        feed = "feed" <~~ json // what is <~~ ?   It's called the Encode Operator and it's defined in Gloss's Operators.swift file. Basically it tells Gloss to grab the value which belongs to the key feed and encode it. Feed is a Decodable object as well; so Gloss will delegate the responsibility of the encoding to this object.
    }
    
}
