type image = {
  url: string,
  attribution: string,
  attributionUrl: option(string),
};

type place = {
  id: string,
  name: string,
  description: string,
  address: string,
  phone: option(string),
  image,
  email: option(string),
  coordinats: (float, float),
  href: string,
};

let places = [
  {
    id: "e0d0c7eb-d32e-4e2a-b1b0-31305b2265cf",
    name: {j|Sacre Coeur Basilica|j},
    description: {j|The Basilica of the Sacred Heart of Paris, commonly known as Sacré-Cœur Basilica and often simply Sacré-Cœur, is a Roman Catholic church and minor basilica, dedicated to the Sacred Heart of Jesus, in Paris, France|j},
    address: {j|35 Rue du Chevalier de la Barre, 75018 Paris, France|j},
    image: {
      url: {j|https://images.pexels.com/photos/56835/sacred-heart-basilica-of-the-sacred-heart-paris-56835.jpeg?auto=compress&cs=tinysrgb&dpr=2&h=750&w=1260|j},
      attribution: "Pixabay",
      attributionUrl: Some("pixabay.com"),
    },
    phone: Some("33153418900"),
    email: None,
    coordinats: (48.887440, 2.342320),
    href: "http://www.sacre-coeur-montmartre.com/english/",
  },
  {
    id: "0d17dab3-be88-47c5-b2ef-aaa0a90f492f",
    name: {j|The Louvre|j},
    description: {j|The Louvre, or the Louvre Museum, is the world's largest art museum and a historic monument in Paris, France. A central landmark of the city, it is located on the Right Bank of the Seine in the city's 1st arrondissement.|j},
    address: {j|Rue de Rivoli, 75001 Paris, France|j},
    image: {
      url: "https://images.pexels.com/photos/2363/france-landmark-lights-night.jpg?auto=compress&cs=tinysrgb&dpr=2&h=750&w=1260",
      attribution: "Pixabay",
      attributionUrl: Some("pixabay.com"),
    },
    phone: Some("033140205050"),
    email: None,
    coordinats: (48.863130, 2.341960),
    href: "https://www.louvre.fr/en",
  },
  {
    id: "3326b502-4788-4b9c-ac04-0b78e804b593",
    name: {j|The Eiffel Tower|j},
    description: {j|The Eiffel Tower is a wrought iron lattice tower on the Champ de Mars in Paris, France. It is named after the engineer Gustave Eiffel, whose company designed and built the tower.|j},
    address: {j|Champ de Mars, 5 Avenue Anatole France, 75007 Paris, France|j},
    image: {
      url: "https://images.pexels.com/photos/149522/pexels-photo-149522.jpeg?auto=compress&cs=tinysrgb&dpr=2&h=750&w=1260",
      attribution: "Flickr",
      attributionUrl:
        Some("https://www.flickr.com/photos/mustangjoe/14062387983/"),
    },
    phone: None,
    email: None,
    coordinats: (36.292160, (-88.296460)),
    href: "https://www.toureiffel.paris/en",
  },
  {
    id: "c1b1e047-75ec-46ed-b127-178f68277abf",
    name: {j|Arc de Triomphe|j},
    description: {j|The Arc de Triomphe de l'Étoile is one of the most famous monuments in Paris, standing at the western end of the Champs-Élysées at the center of Place Charles de Gaulle, formerly named Place de l'Étoile — the étoile or 'star' of the juncture formed by its twelve radiating avenues.|j},
    address: {j|Place Charles de Gaulle, 75008 Paris, France|j},
    image: {
      url: "https://images.pexels.com/photos/224756/pexels-photo-224756.jpeg?auto=compress&cs=tinysrgb&dpr=2&h=750&w=1260",
      attribution: "Burak AYDIN",
      attributionUrl: Some("https://www.pexels.com/@erbapjr"),
    },
    phone: None,
    email: None,
    coordinats: (48.876910, 2.293690),
    href: "http://www.paris-arc-de-triomphe.fr/en/",
  },
];